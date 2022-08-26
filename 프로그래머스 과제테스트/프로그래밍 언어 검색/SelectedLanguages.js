// SelectedLanguages.js->선택된 언어가 무엇인지 렌더링하는 컴포넌트
const MAX_DISPLAY_COUNT = 5;
export default function SelectedLanguage({ $target, initialState }) {
  this.$element = document.createElement("div");
  this.$element.className = "SelectedLanguage";
  this.state = initialState;

  $target.appendChild(this.$element);

  this.setState = (nextState) => {
    this.state = nextState;
    // 5개까지만 선택이 가능하도록
    if (this.state.length > MAX_DISPLAY_COUNT) {
      const startPosition = this.state.length - MAX_DISPLAY_COUNT;
      this.state = this.state.slice(
        startPosition,
        MAX_DISPLAY_COUNT + startPosition
      );
    }
    this.render();
  };

  this.render = () => {
    this.$element.innerHTML = `
        <ul>
          ${this.state
            .map(
              (item) => `
            <li>${item}</li>
          `
            )
            .join("")}
        </ul>
      `;
  };

  this.render();
}
