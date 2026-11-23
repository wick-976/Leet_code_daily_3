class ProductOfNumbers {

    private ArrayList<Integer> pre_pod;

    public ProductOfNumbers() {
        pre_pod = new ArrayList<>();
        pre_pod.add(1);
    }

    public void add(int num) {
        if (num == 0) {
            pre_pod = new ArrayList<>();
            pre_pod.add(1);
        } else {
            pre_pod.add(pre_pod.get(pre_pod.size() - 1) * num);
        }
    }

    public int getProduct(int k) {
        if (k >= pre_pod.size()) {
            return 0;
        }

        return pre_pod.get(pre_pod.size() - 1)
                / pre_pod.get(pre_pod.size() - k - 1);
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */