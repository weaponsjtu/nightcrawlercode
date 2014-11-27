function $(id) {
  ele = document.getElementById(id);
  if (ele == null) {
    ele = document.getElementsByTagName(id);
  }
  return ele;
}

function doc() {
  body = $("body");
  title = $("h1");
  nav = document.createElement("div");
  nav.html("<h3>Ŀ¼</h3> <ul> <li> <a></a> </li> </ul>");
  title.appendChild(nav);
}
