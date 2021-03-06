/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIChartColumnHeaderView : UIControl {
    NSArray * _buttons;
    int  _selectedTitleIndex;
}

@property (nonatomic, readonly) float edgePadding;
@property (nonatomic) int selectedTitleIndex;
@property (nonatomic, copy) NSArray *titles;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_reloadSelectedButton;
- (void)dealloc;
- (float)edgePadding;
- (void)layoutSubviews;
- (int)selectedTitleIndex;
- (void)setBackgroundColor:(id)arg1;
- (void)setSelectedTitleIndex:(int)arg1;
- (void)setTitles:(id)arg1;
- (void)sizeToFit;
- (id)titles;

@end
