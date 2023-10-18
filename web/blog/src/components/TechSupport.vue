<template>
  <header id="page_header">
    <h1>TechSupport</h1>
    <nav>
      <ul>
        <RouterLink to="/MainPage" class="top">HomePage</RouterLink>
        <RouterLink to="/AboutMe" class="top">About me</RouterLink>
        <RouterLink to="/TechSupport" class="top">TechSupport</RouterLink>
      </ul>
    </nav>
  </header>

  <div>
    <iframe src="http://mirrors.zju.edu.cn/" />
  </div>
  


</template>

<script>


</script>

<style>
iframe {
    width: 100%;
    height: 1000px;
    border: none;
}

#page_header {
  width: 100%;
}

#page_header>nav>ul,
#page_footer>nav>ul {
  list-style: none;
  margin: 0;
  padding: 0;
}

.top{
  margin: 10px;
}

#page_header>nav>ul>li,
#page_footer>nav>ul>li {
  margin: 0 20px 0 0;
  padding: 0;
  display: inline;
}
</style>

