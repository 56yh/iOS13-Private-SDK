//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconListLayout-Protocol.h>

@class NSMutableDictionary, NSString, SBHClockIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHFolderIconVisualConfiguration, SBHIconAccessoryVisualConfiguration, SBHSidebarVisualConfiguration, SBIconListGridLayoutConfiguration, UIFont;

@interface SBIconListGridLayout : NSObject <SBIconListLayout, BSDescriptionProviding>
{
    NSMutableDictionary *_labelFonts;
    UIFont *_accessoryFont;
    UIFont *_accessoryBoldFont;
    SBIconListGridLayoutConfiguration *_layoutConfiguration;
}

@property(readonly, copy, nonatomic) SBIconListGridLayoutConfiguration *layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (struct SBIconCoordinate)iconCoordinateForIndex:(unsigned long long)arg1 forOrientation:(long long)arg2 inList:(id)arg3;
@property(readonly, copy, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property(readonly, copy, nonatomic) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property(readonly, copy, nonatomic) SBHClockIconVisualConfiguration *clockIconVisualConfiguration;
@property(readonly, copy, nonatomic) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
- (id)accessoryBoldFont;
- (id)accessoryFont;
- (id)accessoryFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
- (id)labelVisualConfigurationForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
- (id)labelFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
- (void)noteIcons:(id)arg1 didDropAtCoordinate:(struct SBIconCoordinate)arg2 inList:(id)arg3;
@property(readonly, nonatomic) _Bool usesAlternateLayout;
- (struct UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1;
@property(readonly, nonatomic) unsigned long long maximumIconCount;
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;
@property(readonly, nonatomic) struct SBIconImageInfo iconImageInfo;
- (id)init;
- (id)initWithLayoutConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

