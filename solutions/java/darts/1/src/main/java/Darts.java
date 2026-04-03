class Darts {
    int score(double xOfDart, double yOfDart) {
        double distance = Math.hypot(xOfDart, yOfDart);
        final double OUTER_CIRCLE = 10;
        final double MIDDLE_CIRCLE = 5;
        final double INNER_CIRCLE = 1;
        
        if (distance > OUTER_CIRCLE) {
            return 0;
        }
        if (distance > MIDDLE_CIRCLE) {
            return 1;
        }
        if (distance > INNER_CIRCLE) {
            return 5;
        }
        return 10;
    }
}
