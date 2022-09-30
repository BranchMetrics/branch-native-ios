//
//  NativeComputeDebugButtonCell.h
//  Branch
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NativeComputeDebugButtonCell : UITableViewCell
@property (nonatomic, weak) UITextView *textView;
@property (nonatomic, copy, nullable) void (^buttonTapCallback)(void);
@end

NS_ASSUME_NONNULL_END
