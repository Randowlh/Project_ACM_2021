public class BirdC extends Animal implements InterfMovingAction,InterfFoodMenu{
    public void foodmenu(){
        System.out.println("BirdC's food is meat");
    }
    public void movingaction(){
        System.out.println("BirdC is flying");
    }
}
