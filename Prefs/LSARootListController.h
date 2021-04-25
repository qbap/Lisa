#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBRootListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>
#import <Cephei/HBPreferences.h>
#import <Cephei/HBRespringController.h>

@interface LSAAppearanceSettings : HBAppearanceSettings
@end

@interface LSARootListController : HBRootListController {
    UITableView * _table;
}
@property(nonatomic, retain)UISwitch* enableSwitch;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) UIImageView *headerImageView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIImageView *iconView;
- (void)toggleState;
- (void)setEnableSwitchState;
- (void)resetPrompt;
- (void)resetPreferences;
- (void)respring;
- (void)respringUtil;
- (void)testNotifications:(id)sender;
- (void)testBanner:(id)sender;
@end

@interface NSTask : NSObject
@property(copy)NSString* launchPath;
- (void)launch;
@end