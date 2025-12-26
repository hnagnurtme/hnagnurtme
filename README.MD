<div align="center">

<style>
  @keyframes walkAround {
    0% { top: 5%; left: 5%; }
    25% { top: 5%; left: 85%; }
    50% { top: 5%; left: 85%; }
    75% { top: 5%; left: 5%; }
    100% { top: 5%; left: 5%; }
  }
  @keyframes flipDirection {
    0%, 25% { transform: scaleX(1); }
    50%, 75% { transform: scaleX(-1); }
    100% { transform: scaleX(1); }
  }
  @keyframes tailWag {
    0%, 100% { transform: rotate(-10deg); }
    50% { transform: rotate(10deg); }
  }
  @keyframes blink {
    0%, 90%, 100% { opacity: 1; }
    95% { opacity: 0; }
  }
  .pixel-cat-container {
    position: absolute;
    animation: walkAround 12s linear infinite;
    width: 64px;
    height: 48px;
    z-index: 10;
  }
  .pixel-cat-inner {
    animation: flipDirection 12s linear infinite;
    width: 100%;
    height: 100%;
  }
</style>


<h1 style="
  font-size: 3rem;
  font-weight: 900;
  text-transform: uppercase;
  line-height: 0.9;
  letter-spacing: -0.05em;
  margin: 30px 0;
  font-family: 'Space Grotesk', sans-serif;
">
  <span style="
    background: linear-gradient(to right, #3cf91a, #16a34a);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent;
    background-clip: text;
    -webkit-text-stroke: 2px black;
    display: inline-block;
  ">
    SOFTWARE ENGINEER
  </span>
</h1>

<p style="
  font-size: 1.25rem;
  font-weight: 500;
  max-width: 600px;
  margin: 20px auto;
  border-left: 4px solid #3cf91a;
  padding-left: 20px;
  padding-top: 8px;
  padding-bottom: 8px;
  text-align: left;
  color: #333;
">
  Crafting scalable solutions across front-end, back-end & cloud — integrating AI through precise & maintainable code.
</p>

---

<div style="
  background: linear-gradient(135deg, #f4f1ea 0%, #e5e5e5 100%);
  border: 3px solid #000;
  box-shadow: 6px 6px 0px 0px #000000;
  padding: 20px;
  margin: 20px auto;
  max-width: 500px;
  text-align: center;
">
  <div style="display: flex; flex-wrap: wrap; gap: 6px; justify-content: center;">
  <a href="https://leetcode.com/u/hnagnurt/" target="_blank" style="display: inline-flex; align-items: center; gap: 4px; padding: 6px 10px; background: #FFA116; color: #000; font-weight: 700; font-size: 0.7rem; border: 2px solid #000; box-shadow: 2px 2px 0 #000; text-decoration: none;">
    <img src="https://cdn.simpleicons.org/leetcode/000" width="12" height="12" alt="LeetCode"/> LEETCODE
  </a>
  <a href="http://hnagnurtme.id.vn" target="_blank" style="display: inline-flex; align-items: center; gap: 4px; padding: 6px 10px; background: #4bf425; color: #000; font-weight: 700; font-size: 0.7rem; border: 2px solid #000; box-shadow: 2px 2px 0 #000; text-decoration: none;">
    🌐 PORTFOLIO
  </a>
  <a href="https://www.linkedin.com/in/trunganh0106" target="_blank" style="display: inline-flex; align-items: center; gap: 4px; padding: 6px 10px; background: #0A66C2; color: #fff; font-weight: 700; font-size: 0.7rem; border: 2px solid #000; box-shadow: 2px 2px 0 #000; text-decoration: none;">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/81/LinkedIn_icon.svg/2048px-LinkedIn_icon.svg.png" width="12" height="12" alt="LinkedIn"/> LINKEDIN
  </a>
  <a href="https://www.facebook.com/trunganh.nguyen.397" target="_blank" style="display: inline-flex; align-items: center; gap: 4px; padding: 6px 10px; background: #1877F2; color: #fff; font-weight: 700; font-size: 0.7rem; border: 2px solid #000; box-shadow: 2px 2px 0 #000; text-decoration: none;">
    <img src="https://cdn.simpleicons.org/facebook/fff" width="12" height="12" alt="Facebook"/> FB
  </a>
  <a href="https://www.instagram.com/hnagnurt.me" target="_blank" style="display: inline-flex; align-items: center; gap: 4px; padding: 6px 10px; background: linear-gradient(45deg, #f09433, #e6683c, #dc2743, #cc2366, #bc1888); color: #fff; font-weight: 700; font-size: 0.7rem; border: 2px solid #000; box-shadow: 2px 2px 0 #000; text-decoration: none;">
    <img src="https://cdn.simpleicons.org/instagram/fff" width="12" height="12" alt="Instagram"/> IG
  </a>
</div>
</div>
</div>
<!-- Pixel Cat Animation -->
<div style="position: relative; height: 120px; margin-bottom: 20px;">
  <div class="pixel-cat-container">
    <div class="pixel-cat-inner">
      <svg viewBox="0 0 32 24" style="width: 100%; height: 100%; image-rendering: pixelated;">
        <ellipse cx="14" cy="22" rx="8" ry="2" fill="rgba(0,0,0,0.3)" />
        <g style="transform-origin: left center; animation: tailWag 0.5s infinite;">
          <rect x="22" y="10" width="2" height="2" fill="#2dd916" />
          <rect x="24" y="8" width="2" height="2" fill="#2dd916" />
          <rect x="26" y="6" width="2" height="3" fill="#2dd916" />
          <rect x="28" y="4" width="2" height="3" fill="#3cf91a" />
        </g>
        <rect x="6" y="10" width="14" height="7" fill="#3cf91a" />
        <rect x="7" y="9" width="12" height="2" fill="#2dd916" />
        <rect x="8" y="11" width="10" height="5" fill="#4aff2e" />
        <rect x="2" y="4" width="10" height="8" fill="#3cf91a" />
        <rect x="3" y="3" width="8" height="2" fill="#2dd916" />
        <rect x="2" y="1" width="3" height="3" fill="#3cf91a" />
        <rect x="9" y="1" width="3" height="3" fill="#3cf91a" />
        <g style="animation: blink 3s infinite;">
          <rect x="4" y="7" width="2" height="2" fill="#000" />
          <rect x="4" y="7" width="1" height="1" fill="#fff" />
          <rect x="8" y="7" width="2" height="2" fill="#000" />
          <rect x="8" y="7" width="1" height="1" fill="#fff" />
        </g>
        <rect x="6" y="9" width="2" height="1" fill="#ff6b9d" />
        <rect x="5" y="11" width="6" height="1" fill="#ff6b6b" />
        <rect x="7" y="11" width="2" height="2" fill="#ffd700" />
      </svg>
    </div>
  </div>
</div>
