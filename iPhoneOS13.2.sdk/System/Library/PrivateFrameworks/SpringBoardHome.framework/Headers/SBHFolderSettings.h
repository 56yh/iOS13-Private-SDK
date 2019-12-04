//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface SBHFolderSettings : PTSettings
{
    _Bool _allowNestedFolders;
    _Bool _pinchToClose;
    _Bool _oneColumnAtATime;
    _Bool _sortsIconsAlphabetically;
    double _minPinchScale;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool sortsIconsAlphabetically; // @synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically;
@property(nonatomic) _Bool oneColumnAtATime; // @synthesize oneColumnAtATime=_oneColumnAtATime;
@property(nonatomic) double minPinchScale; // @synthesize minPinchScale=_minPinchScale;
@property(nonatomic) _Bool pinchToClose; // @synthesize pinchToClose=_pinchToClose;
@property(nonatomic) _Bool allowNestedFolders; // @synthesize allowNestedFolders=_allowNestedFolders;
- (void)setDefaultValues;

@end

