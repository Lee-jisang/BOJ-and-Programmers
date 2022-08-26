// SearchInput.js
export default function SearchInput({ $target, initialState, onChange }) {
  this.$element = document.createElement("form");
  console.log(this.$element);
  this.$element.className = "SearchInput";
  //console.log(this.$element.className);
  this.state = initialState;
  //console.log(this.state);

  $target.appendChild(this.$element);
  //console.log($target);

  this.render = () => {
    this.$element.innerHTML = `
      <input class="SearchInput__input" type="text" placeholder="프로그램 언어를 입력하세요." value="${this.state}">
      `;
  };
  this.render();
  //화면 들어오자마자 SearchInput에 focus 가게 하기
  document.querySelector(".SearchInput__input").focus();
  //이벤트 핸들러 구현부분
  this.$element.addEventListener("keyup", (e) => {
    const actionIgnoreKeys = [
      "Enter",
      "ArrowUp",
      "ArrowDown",
      "ArrowLeft",
      "ArrowRight",
    ];

    if (!actionIgnoreKeys.includes(e.key)) {
      //방향키 제외하고

      onChange(e.target.value);
    } //keyup 키보드가 눌렸을때 onchange 함수 실행
  });

  // form태그 submit 이벤트 무시하기
  this.$element.addEventListener("submit", (e) => {
    e.preventDefault();
  });
}
