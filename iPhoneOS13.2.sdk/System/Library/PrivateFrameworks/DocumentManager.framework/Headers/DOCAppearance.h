//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString, UIColor;

@interface DOCAppearance : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_collectionCreateButtonTitle;
    _Bool _showsCreateButton;
    _Bool _shouldShowFileExtensions;
    _Bool _forceClearBackground;
    _Bool _alwaysEnableScrollInSourceView;
    double _compactHorizontalTableStackSpacing;
    double _regularHorizontalTableStackSpacing;
    double _fullHorizontalTableStackSpacing;
    UIColor *_largeTitleColor;
    UIColor *_backgroundTintColor;
    unsigned long long _browserUserInterfaceStyle;
    double _createButtonAspectRatio;
}

+ (_Bool)supportsSecureCoding;
+ (id)recentsWidgetAppearance;
+ (id)recentsPopoverAppearance;
+ (id)documentsPickerAppearance;
@property _Bool alwaysEnableScrollInSourceView; // @synthesize alwaysEnableScrollInSourceView=_alwaysEnableScrollInSourceView;
@property(nonatomic) double createButtonAspectRatio; // @synthesize createButtonAspectRatio=_createButtonAspectRatio;
@property(nonatomic) unsigned long long browserUserInterfaceStyle; // @synthesize browserUserInterfaceStyle=_browserUserInterfaceStyle;
@property(nonatomic) _Bool forceClearBackground; // @synthesize forceClearBackground=_forceClearBackground;
@property(nonatomic) _Bool shouldShowFileExtensions; // @synthesize shouldShowFileExtensions=_shouldShowFileExtensions;
@property(nonatomic) _Bool showsCreateButton; // @synthesize showsCreateButton=_showsCreateButton;
@property(retain, nonatomic) UIColor *backgroundTintColor; // @synthesize backgroundTintColor=_backgroundTintColor;
@property(retain, nonatomic) UIColor *largeTitleColor; // @synthesize largeTitleColor=_largeTitleColor;
@property(nonatomic) double fullHorizontalTableStackSpacing; // @synthesize fullHorizontalTableStackSpacing=_fullHorizontalTableStackSpacing;
@property(nonatomic) double regularHorizontalTableStackSpacing; // @synthesize regularHorizontalTableStackSpacing=_regularHorizontalTableStackSpacing;
@property(nonatomic) double compactHorizontalTableStackSpacing; // @synthesize compactHorizontalTableStackSpacing=_compactHorizontalTableStackSpacing;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) NSString *collectionCreateButtonTitle;
- (id)init;
@property(readonly) UIColor *backgroundColor;

@end

