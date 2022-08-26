import SelectedLanguages from "./SelectedLanguages.js";
import SearchInput from "./SearchInput.js";
import Suggestion from "./Suggestion.js";

import { fetchLanguages } from "./api.js";

export default function App({ $target }) {
  this.state = {
    fetchedLanguages: [],
    selectedLanguages: [],
  };
  //console.log(this.state);
  this.setState = (nextState) => {
    //nextState->fetchedLanguages: (5) ['A.NET (A#/A sharp)', 'A-0 System', 'A+ (A plus)', 'ABAP', 'ABC']
    //console.log(this.state);
    //console.log(nextState);
    //배열 병합
    this.state = {
      ...this.state,
      ...nextState,
    };
    //console.log(this.state);
    suggestion.setState({
      selectedIndex: 0,
      items: this.state.fetchedLanguages,
    });
    selectedLanguages.setState(this.state.selectedLanguages);
  };

  const selectedLanguages = new SelectedLanguages({
    $target,
    initialState: [],
  });

  const searchInput = new SearchInput({
    $target,
    initialState: "",
    onChange: async (keyword) => {
      // 입력한 검색어가 다 지워진 경우에는 fetchLanguages를 초기화 한다.
      if (keyword.length === 0) {
        this.setState({
          fetchedLanguages: [],
        });
      } else {
        const languages = await fetchLanguages(keyword);
        //console.log(languages); //json 형식,object,['A.NET (A#/A sharp)', 'A-0 System', 'A+ (A plus)', 'ABAP', 'ABC']
        this.setState({
          fetchedLanguages: languages,
        });
      }
    },
  });

  const suggestion = new Suggestion({
    $target,
    initialState: {
      selectedIndex: 0,
      items: [],
    },
    onSelect: (language) => {
      alert(language);
      // 이미 선택된 언어인 경우, 맨 뒤로 보내버리는 처리
      console.log([...this.state.selectedLanguages]);
      const nextSelectedLanguages = [...this.state.selectedLanguages];

      const index = nextSelectedLanguages.findIndex(
        (selectedLanguage) => selectedLanguage === language
      );
      console.log(index);

      if (index > -1) {
        nextSelectedLanguages.splice(index, 1);
      }
      nextSelectedLanguages.push(language);

      this.setState({
        ...this.state,
        selectedLanguages: nextSelectedLanguages,
      });
      console.log(this.state);
    },
  });
}
