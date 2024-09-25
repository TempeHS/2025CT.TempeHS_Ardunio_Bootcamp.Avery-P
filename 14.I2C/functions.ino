bool gameOver ()  {
  return false;
if (y <= 11 || y >= 59 || x <= 1 || x >=119){
  Oled.setCursor(0,10);
  Oled.print("Game Over!");
    return true;}
  else {
    return false;
}
}