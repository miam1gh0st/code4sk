<template>
    <div class="WelcomePage" :style = "WelcomePage">
        <button id="btn" @click="jump" style="background: rgb(255, 255, 255) ;">欢迎访问小明的博客:D</button>
    </div>
  </template>
   
   
  
  <script>
  export default {
    name: "WelcomePage",
    data(){
    return{
      msg: '',
      WelcomePage: {
            backgroundImage:"url(" + require("../assets/WelcomeKirby.jpg") + ")"
        }
    }
  },
  methods: {
    jump(){
    this.$router.push({path: '/MainPage'})
    }
  }
  }

  </script>
    
    
    
    
  <style scoped>
  .WelcomePage{
    width:100%;
    height:100%;  /**宽高100%是为了图片铺满屏幕 **/
    z-index:-1;
    position: absolute;
  }


  
  #btn {
    color:rgb(177, 189, 11);
    margin-top:400px;
    margin-left:850px;
  }
  
  * {
    box-sizing:border-box;
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