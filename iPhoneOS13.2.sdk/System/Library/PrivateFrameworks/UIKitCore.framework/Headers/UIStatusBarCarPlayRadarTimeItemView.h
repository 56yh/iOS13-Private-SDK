//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView
{
    _Bool _isInternalInstall;
    _Bool _radarItemEnabled;
    _Bool _currentlyGatheringLogs;
}

- (_Bool)_showRadarButtonForInternalInstalls;
- (void)_gatheringLogsDidChangeStatusNotification:(id)arg1;
- (id)_timeImageSet;
- (id)contentsImage;
- (_Bool)usesAdvancedActions;
- (_Bool)allowsUserInteraction;
- (_Bool)canBecomeFocused;
- (_Bool)showsTouchWhenHighlighted;
- (long long)buttonType;
- (id)highlightImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

