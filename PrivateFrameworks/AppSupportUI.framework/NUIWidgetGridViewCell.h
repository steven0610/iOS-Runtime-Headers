/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIWidgetGridViewCell : NUIContainerStackView <NUIContainerStackViewDelegate, NUIWidgetGridViewCell> {
    struct { 
        float leading; 
        float trailing; 
    }  _donatableSpace;
    BOOL  _donatableSpaceIsValid;
    NUIWidgetGridView * _gridView;
    unsigned int  _index;
    struct CGSize { 
        float width; 
        float height; 
    }  _measuredSize;
    float  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUIWidgetGridView *gridView;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) unsigned int index;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_createButtonWithGridView:(id)arg1 item:(id)arg2;
- (id)_createLabelForStyle:(int)arg1;
- (void)_didTapButton:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (struct CGSize { float x1; float x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg2 forArrangedSubview:(id)arg3;
- (struct { float x1; float x2; })donatableSpace;
- (struct { float x1; float x2; })donatableSpaceAllowRemeasure:(BOOL)arg1;
- (id)gridView;
- (id)imageView;
- (unsigned int)index;
- (id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned int)arg3;
- (void)invalidateIntrinsicContentSize;
- (id)subtitleLabel;
- (id)titleLabel;

@end