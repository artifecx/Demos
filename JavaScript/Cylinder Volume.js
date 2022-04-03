function Cylinder(cyl_height, cyl_diameter){
   this.cyl_height = cyl_height;
      console.log(`Height: ${cyl_height}cm`);
   this.cyl_diameter = cyl_diameter;
      console.log(`Diameter: ${cyl_diameter}cm`);
}
Cylinder.prototype.Volume = function(){
   var radius = this.cyl_diameter / 2;
   return this.cyl_height * Math.PI * radius * radius;
}

var cyl = new Cylinder(8, 2);
console.log(`Volume: ${cyl.Volume().toFixed(4)}cm^3`);