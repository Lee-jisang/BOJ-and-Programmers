export const API_END_POINT =
  "https://wr4a6p937i.execute-api.ap-northeast-2.amazonaws.com/dev";

const request = async (url) => {
  const res = await fetch(url);
  //console.log(res);

  if (res.ok) {
    const json = await res.json();
    //json->['A.NET (A#/A sharp)', 'A-0 System', 'A+ (A plus)', 'ABAP', 'ABC']
    //console.log(json); //App.js에서 languages랑 같음
    return json;
  }

  throw new Error("요청에 실패함");
};

export const fetchLanguages = async (keyword) =>
  request(`${API_END_POINT}/languages?keyword=${keyword}`);
//url ->`${API_END_POINT}/languages?keyword=${keyword}`
