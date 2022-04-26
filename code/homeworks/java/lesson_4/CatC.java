public class CatC extends Animal implements InterfFoodMenu ,InterfMovingAction{
    @Override
    public void foodmenu() {
        System.out.println("CatC");
    }

    @Override
    public void movingaction() {
        System.out.println("CatC");
    }
}
