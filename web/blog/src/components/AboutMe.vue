<template>
  <header id="page_header">
    <h1>About Me</h1>
    <nav>
      <ul>
        <RouterLink to="/MainPage" class="top">HomePage</RouterLink>
        <RouterLink to="/AboutMe" class="top">About me</RouterLink>
        <RouterLink to="/TechSupport" class="top">TechSupport</RouterLink>
      </ul>
    </nav>
  </header>

  <div class='frame'>
  <div class='profile' @click="showDetail" id='profile-1'>
    <img src='https://100dayscss.com/codepen/13-1.jpg'>
    <div class='overlay'></div>
    <div class='plus'></div>
  </div>
  <div class='profile' @click="showDetail" id='profile-2'>
    <img src='https://100dayscss.com/codepen/13-2.jpg'>
    <div class='overlay'></div>
    <div class='plus'></div>
  </div>
  <div class='profile' @click="showDetail" id='profile-3'>
    <img src='https://100dayscss.com/codepen/13-3.jpg'>
    <div class='overlay'></div>
    <div class='plus'></div>
  </div>
  <div class='profile' @click="showDetail" id='profile-4'>
    <img src='https://100dayscss.com/codepen/13-4.jpg'>
    <div class='overlay'></div>
    <div class='plus'></div>
  </div>
  <div class='detail' :class="{ active: isActive }" ref="detail" id='detail-1'>
    <div class='close' @click="hideDetail"></div>
    <img class='header' src='https://100dayscss.com/codepen/13-1-header.jpg'>
    <div class='image'>
      <img src='https://100dayscss.com/codepen/13-1.jpg'>
    </div>
    <div class='infos'>
      <div class='name'>
        Julia Toth
      </div>
      <div class='action'>
        <div class='btn'>
          <span class='fa fa-phone'>📞</span>
        </div>
        <div class='btn'>
          <span class='fa fa-comment'>💬</span>
        </div>
        <div class='btn'>
          <span class='fa fa-heart'>❤</span>
        </div>
      </div>
    </div>
  </div>
</div>
<div style="height:1vh;"><img style="width:1900px;margin-top:0px;margin-left:0px;" class='footer' src='../assets/ship.jpg'></div>


</template>
 
 

<script>

import { ref } from 'vue';

export default {
  setup() {
    const isActive = ref(false);
    const detail = ref(null);

    const showDetail = () => {
      isActive.value = true;
    };

    const hideDetail = () => {
      isActive.value = false;
    };

    return {
      isActive,
      detail,
      showDetail,
      hideDetail,
    };
  },
};

</script>
  
  
  
  
<style scoped>
@import url(https://fonts.googleapis.com/css?family=Open+Sans:600);
.frame {
  position: absolute;
  top: 50%;
  left: 50%;
  width: 400px;
  height: 400px;
  margin-top: -200px;
  margin-left: -200px;
  border-radius: 2px;
  box-shadow: 1px 2px 10px 0px rgba(0, 0, 0, 0.3);
  background: #fff;
  color: #fff;
  font-family: "Open Sans", Helvetica, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}

.profile {
  position: relative;
  float: left;
  width: 194px;
  height: 194px;
  margin: 4px 0 0 4px;
  cursor: pointer;
}
.profile .overlay {
  position: absolute;
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  background: #000;
  opacity: 0;
  transition: all 0.6s ease-in-out;
}
.profile .plus {
  position: absolute;
  width: 50px;
  height: 50px;
  top: 50%;
  left: 50%;
  margin: -25px 0 0 -25px;
  background: #EC6565;
  border-radius: 50%;
  box-shadow: 2px 4px 10px 0 rgba(0, 0, 0, 0.5);
  transition: all 0.4s ease-in-out;
  opacity: 0;
  transform: scale(2);
  pointer-events: none;
}
.profile .plus:before {
  position: absolute;
  content: "";
  width: 14px;
  height: 2px;
  top: 24px;
  left: 18px;
  background: #fff;
}
.profile .plus:after {
  position: absolute;
  content: "";
  width: 2px;
  height: 14px;
  top: 18px;
  left: 24px;
  background: #fff;
}
.profile:hover .plus {
  opacity: 1;
  transform: scale(1) translate3d(0, 0, 0);
}
.profile:hover .overlay {
  opacity: 0.4;
}

.detail {
  display: none;
  position: absolute;
  z-index: 2;
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  overflow: hidden;
  pointer-events: none;
  font-size: 0;
}
.detail.active {
  pointer-events: all;
}
.detail.active .header {
  transform: translate3d(0, 0, 0);
  transition: all 0.6s ease-out;
}
.detail.active .image {
  transform: translate3d(0, 0, 0);
  transition: all 0.6s ease-out 0.3s;
}
.detail.active .infos {
  transform: translate3d(0, 0, 0);
  transition: all 0.6s ease-out;
}
.detail.active .close {
  transform: rotate(45deg) translate3d(0, 0, 0);
  transition: background 0.3s ease-in-out, transform 0.6s ease-out 0.6s;
}
.detail .close {
  position: absolute;
  z-index: 2;
  width: 50px;
  height: 50px;
  top: 10px;
  right: 10px;
  background: #EC6565;
  border-radius: 50%;
  transition: background 0.3s ease-in-out, transform 0.5s ease-in;
  transform: rotate(45deg) translate3d(-105%, -105%, 0);
  cursor: pointer;
}
.detail .close:before {
  position: absolute;
  content: "";
  width: 14px;
  height: 2px;
  top: 24px;
  left: 18px;
  background: #fff;
  transition: all 0.3s ease-in-out;
}
.detail .close:after {
  position: absolute;
  content: "";
  width: 2px;
  height: 14px;
  top: 18px;
  left: 24px;
  background: #fff;
  transition: all 0.3s ease-in-out;
}
.detail .close:hover {
  background: #fff;
}
.detail .close:hover:after, .detail .close:hover:before {
  background: #EC6565;
}
.detail .header {
  transform: translate3d(0, -105%, 0);
  transition: all 0.6s ease-in 0.4s;
}
.detail .image {
  box-sizing: border-box;
  position: absolute;
  z-index: 1;
  top: 130px;
  left: 150px;
  width: 100px;
  height: 100px;
  border: 2px solid #fff;
  border-radius: 50%;
  overflow: hidden;
  box-shadow: 4px 6px 15px 0 rgba(0, 0, 0, 0.2);
  transform: translate3d(0, -250px, 0);
  transition: all 0.6s ease-in 0.2s;
}
.detail .image img {
  width: 100%;
  height: auto;
}
.detail .infos {
  box-sizing: border-box;
  background: #EC6565;
  height: 220px;
  padding-top: 67px;
  transform: translate3d(0, 105%, 0);
  transition: all 0.6s ease-in 0.4s;
}
.detail .name {
  font-size: 16px;
  font-weight: 600;
  text-align: center;
}
.detail .action {
  margin-top: 35px;
  text-align: center;
}
.detail .action .btn {
  position: relative;
  box-sizing: border-box;
  display: inline-block;
  width: 45px;
  height: 45px;
  border: 1px solid #fff;
  margin: 0 20px;
  border-radius: 45px;
  cursor: pointer;
  transition: all 0.2s ease-in-out;
}
.detail .action .btn:hover {
  background: #fff;
  color: #EC6565;
  box-shadow: 2px 3px 6px 0 rgba(0, 0, 0, 0.2);
}
.detail .action .btn .fa {
  position: absolute;
  top: 0;
  left: 0;
  right: 0;
  text-align: center;
  line-height: 20px;
  font-size: 19px;
  padding-top: 12px;
}
.detail .action .btn .fa-phone {
  font-size: 22px;
}
.detail .action .btn .fa-comment {
  font-size: 20px;
  padding-top: 10px;
  left: 2px;
}
.detail .action .btn .fa-heart {
  top: 1px;
  left: 2px;
}

#detail-1 {
  display: block;
}
#page_header>nav>ul,
#page_footer>nav>ul {
  list-style: none;
  margin: 0;
  padding: 0;
}

.top {
  margin: 10px;
}

#page_header>nav>ul>li,
#page_footer>nav>ul>li {
  margin: 0 20px 0 0;
  padding: 0;
  display: inline;
}

#btn {
  margin-left: 850px;
  margin-top: 300px;
}

* {
  box-sizing: border-box;
}

body {
  background-color: #1c1c1c;
  display: flex;
  align-items: center;
  justify-content: center;
  margin: 0;
  min-height: 100vh;
  overflow: hidden;
}

button {
  background-color: rebeccapurple;
  border-radius: 5px;
  box-shadow: 4px 4px 5px rgba(255, 255, 255, 0.15);
  border: none;
  color: white;
  cursor: pointer;
  padding: 1rem 2rem;
  position: relative;
  transition: transform 0.1s linear, box-shadow 0.1s linear;
  z-index: 10;
}

button:active {
  transform: translate(4px, 4px);
  box-shadow: 0 0 0 rebeccapurple;
}

button:focus {
  outline: none;
}

.particle {
  --x: 0;
  --y: 0;
  background-color: rebeccapurple;
  border-radius: 50%;
  position: absolute;
  top: 50%;
  left: 50%;
  height: 5px;
  width: 5px;
  z-index: -1;
}

.particle.move {
  animation: move 1000ms linear forwards;
}

@keyframes move {
  to {
    transform: translate(var(--x), var(--y));
  }

  95% {
    opacity: 1;
  }

  100% {
    opacity: 0;
  }
}
</style>