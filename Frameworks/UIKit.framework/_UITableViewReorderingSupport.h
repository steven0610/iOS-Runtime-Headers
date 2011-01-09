/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexPath, UITableViewCell, NSTimer, UIShadowView;



@interface _UITableViewReorderingSupport : NSObject 
{
    UITableViewCell *_reorderedCell;
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_targetIndexPath;
    unsigned int _oldShowHorizontalScrollIndicator : 1;
    unsigned int _oldShowVerticalScrollIndicator : 1;
    unsigned int _reloadDataCalled : 1;
    unsigned int _reserved : 29;
    NSTimer *_autoscrollTimer;
    UIShadowView *_topShadowView;
    UIShadowView *_bottomShadowView;
    BOOL _wasScrollingEnabled;
}



@end