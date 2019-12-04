//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerFlashButton : CAMControlDrawerMenuButton
{
    _Bool _flashUnavailable;
    long long _flashMode;
}

@property(nonatomic, getter=isFlashUnavailable) _Bool flashUnavailable; // @synthesize flashUnavailable=_flashUnavailable;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (_Bool)isExpandable;
- (_Bool)shouldUseActiveTintForCurrentState;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)arg1;
- (id)loadMenuItems;
- (_Bool)isMenuItemSelected:(id)arg1;
- (long long)controlType;

@end

