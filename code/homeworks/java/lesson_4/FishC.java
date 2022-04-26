public class FishC extends Animal implements InterfMovingAction,InterfFoodMenu{

    @Override
    public void foodmenu() {
        System.out.println("FishC");
    }

    @Override
    public void movingaction() {
        System.out.println("FishC");
    }
}
