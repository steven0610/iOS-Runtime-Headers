/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString, IUModalContext, UINavigationItem;

@interface IUiPodNavigationController : UINavigationController  {
    IUModalContext *_modalContext;
    UINavigationItem *_navigationItemTemplate;
}

@property(retain) IUModalContext * modalContext;
@property(readonly) NSString * rootIdentifier;


- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)loadView;
- (void)_updateViewControllersModalContext;
- (id)rootIdentifier;
- (void)setModalContext:(id)arg1;
- (id)modalContext;
- (id)description;
- (void)dealloc;

@end