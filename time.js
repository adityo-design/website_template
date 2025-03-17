setInterval(() => {
      let h = new Date().getHours();
      let m = new Date().getMinutes();
      let s = new Date().getSeconds();
      let p = h >= 12 ? "PM" : "AM";
      if (h > 12) {
        h = h - 12;
      }
      h = (h < 10) ? "0" + h : h;
      m = (m < 10) ? "0" + m : m;
      s = (s < 10) ? "0" + s : s;
      hr.innerHTML = h;
      mt.innerHTML = m;
      sd.innerHTML = s;
      pr.innerHTML = p;
      
      
      
      
    })