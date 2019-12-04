//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGViewUserData-Protocol.h>

@class NSSet, NSString, PXCuratedLibraryActionPerformer, PXCuratedLibrarySectionHeaderLayoutSpec, UIColor, UIImage;

@interface PXCuratedLibraryOverlayButtonConfiguration : NSObject <PXGViewUserData>
{
    _Bool _isSystemSymbolIcon;
    UIColor *_contentColor;
    UIColor *_highlightedContentColor;
    UIImage *_iconImage;
    UIImage *_tintedIconImage;
    UIImage *_highlightedIconImage;
    PXCuratedLibrarySectionHeaderLayoutSpec *_spec;
    PXCuratedLibraryActionPerformer *_actionPerformer;
    id /* block */ _actionHandler;
    long long _style;
    long long _segment;
    NSString *_iconImageName;
    NSString *_title;
    NSSet *_possibleTitles;
    NSString *_caption;
    struct UIEdgeInsets _imageEdgeInsets;
    struct UIEdgeInsets _hitTestOutsets;
}

+ (id)tintedImageCache;
+ (id)configurationWithIconImageName:(id)arg1 title:(id)arg2 spec:(id)arg3;
+ (id)configurationWithTitle:(id)arg1 spec:(id)arg2;
+ (id)configurationWithIconImageName:(id)arg1 spec:(id)arg2;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSSet *possibleTitles; // @synthesize possibleTitles=_possibleTitles;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isSystemSymbolIcon; // @synthesize isSystemSymbolIcon=_isSystemSymbolIcon;
@property(readonly, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(nonatomic) struct UIEdgeInsets hitTestOutsets; // @synthesize hitTestOutsets=_hitTestOutsets;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
@property(nonatomic) long long segment; // @synthesize segment=_segment;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) id /* block */ actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) UIImage *highlightedIconImage; // @synthesize highlightedIconImage=_highlightedIconImage;
@property(readonly, nonatomic) UIImage *tintedIconImage; // @synthesize tintedIconImage=_tintedIconImage;
- (id)_tintedImage:(id)arg1 name:(id)arg2 withColor:(id)arg3;
@property(readonly, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, nonatomic) UIColor *highlightedContentColor; // @synthesize highlightedContentColor=_highlightedContentColor;
@property(readonly, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
- (id)_contentColorWhenHighlighted:(_Bool)arg1;
- (void)prepareForRender;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIconImageName:(id)arg1 title:(id)arg2 spec:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

