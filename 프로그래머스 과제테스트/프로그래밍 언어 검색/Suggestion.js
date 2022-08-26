// Suggestion.js->searchinput에 입력값이 들어올때 현재 상태 기반으로 추천 검색어를 노출
export default function Suggestion({ $target, initialState, onSelect }) {
  this.$element = document.createElement("div");
  this.$element.className = "Suggestion";
  //console.log($target); //$target: document.querySelector(".App")
  $target.appendChild(this.$element);
  //console.log(this.$element);

  //   initialState: {items: []}
  this.state = {
    selectedIndex: 0,
    items: initialState.items,
  };
  //console.log(this.state);
  this.setState = (nextState) => {
    //nextState->fetchedLanguages: (5) ['A.NET (A#/A sharp)', 'A-0 System', 'A+ (A plus)', 'ABAP', 'ABC']
    this.state = {
      ...this.state,
      ...nextState,
    };
    //console.log(this.state);
    this.render();
  };

  this.render = () => {
    const { items = [], selectedIndex } = this.state;
    if (items.length > 0) {
      //입력값이 들어올때
      this.$element.style.display = "block";
      // 이중 백틱, .map해서 .join->배열을 문자열로
      this.$element.innerHTML = `
          <ul>
            ${items
              .map(
                (item, index) => `
                <li class="${
                  index === selectedIndex ? "Suggestion__item--selected" : "" // 처음에 첫번째 추천언어 위치에 커서처리,Suggestion__item--selected->로 현재 selectedIndex에 커서처리
                }" data-index="${index}">${item}</li>
            `
              )
              .join("")}
          </ul>
        `;
    } else {
      //입력값이 empty일때
      this.$element.style.display = "none";
      this.$element.innerHTML = "";
    }
  };

  this.render();

  // 키보드 이벤트를 통해, selectedIndex 값을 바꿀 수 있도록 하면 화살표 위, 아래키로 추천 검색어를 순회
  window.addEventListener("keyup", (e) => {
    if (this.state.items.length > 0) {
      const { selectedIndex } = this.state;
      const lastIndex = this.state.items.length - 1;
      const navigationKeys = ["ArrowUp", "ArrowDown"];
      let nextIndex = selectedIndex;

      if (navigationKeys.includes(e.key)) {
        if (e.key === "ArrowUp") {
          nextIndex = selectedIndex === 0 ? lastIndex : nextIndex - 1;
        } else if (e.key === "ArrowDown") {
          nextIndex = selectedIndex === lastIndex ? 0 : nextIndex + 1;
        }

        this.setState({
          ...this.state,
          selectedIndex: nextIndex,
        });
      } else if (e.key === "Enter") {
        // 엔터키 입력시 현재 커서의 위치의 추천검색어를
        // 파라메터로 하여 onSelect 호출
        onSelect(this.state.items[this.state.selectedIndex]);
      }
    }
  });

  //마우스 클릭으로 선택처리-onSelect 호출 하기
  this.$element.addEventListener("click", (e) => {
    const $li = e.target.closest("li"); //클릭한 위치의 타겟에서 제일가까운 li태그 선택
    if ($li) {
      const { index } = $li.dataset;
      try {
        onSelect(this.state.items[parseInt(index)]);
      } catch (e) {
        alert("무언가 잘못되었습니다! 선택할 수 없습니다!");
      }
    }
  });
}
