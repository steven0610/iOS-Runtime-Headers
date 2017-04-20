/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView {
    <MKPlaceCardActionSectionViewDelegate> * _delegate;
    NSLayoutConstraint * _heightAnchor;
    UIButton * _leftButton;
    NSLayoutConstraint * _leftButtonYConstraint;
    MKPlaceCardActionItem * _leftItem;
    MKPlatterView * _platterView;
    UIButton * _rightButton;
    NSLayoutConstraint * _rightButtonYConstraint;
    MKPlaceCardActionItem * _rightItem;
    BOOL  _singleItemIsFullWidth;
    BOOL  _usingSmallFonts;
}

@property (nonatomic) <MKPlaceCardActionSectionViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *leftButton;
@property (nonatomic, retain) MKPlaceCardActionItem *leftItem;
@property (nonatomic, retain) MKPlatterView *platterView;
@property (nonatomic, retain) UIButton *rightButton;
@property (nonatomic, retain) MKPlaceCardActionItem *rightItem;
@property (nonatomic) BOOL singleItemIsFullWidth;

+ (id)_font:(BOOL)arg1;
+ (id)_makePlaceActionButtonWithActionItem:(id)arg1 isLeftItem:(BOOL)arg2 useSmallFonts:(BOOL)arg3 target:(id)arg4;
+ (void)_setButtonString:(id)arg1 forActionItem:(id)arg2 isLeftItem:(BOOL)arg3;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_leftButtonIsPressed:(id)arg1;
- (void)_rightButtonIsPressed:(id)arg1;
- (void)_setUpViewWithButtons;
- (void)dealloc;
- (id)delegate;
- (id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(BOOL)arg3 singleItemIsFullWidth:(BOOL)arg4;
- (id)leftButton;
- (id)leftItem;
- (id)platterView;
- (id)rightButton;
- (id)rightItem;
- (void)setDelegate:(id)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setLeftItem:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setRightItem:(id)arg1;
- (void)setSingleItemIsFullWidth:(BOOL)arg1;
- (void)setTopHairlineHidden:(BOOL)arg1;
- (BOOL)singleItemIsFullWidth;
- (void)tintColorDidChange;

@end