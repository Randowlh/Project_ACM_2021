public class CatB implements InterfFoodMenu,InterfMovingAction{

    @Override
    public void foodmenu() {
        System.out.println("CatB's food menu");
    }

    @Override
    public void movingaction() {
        System .out.println("CatB's moving action");
    }
}
