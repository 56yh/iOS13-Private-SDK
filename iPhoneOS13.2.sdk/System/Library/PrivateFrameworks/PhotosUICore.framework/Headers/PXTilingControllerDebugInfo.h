//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXTilingControllerDebugInfo : NSObject
{
    NSArray *_preheatRects;
    NSArray *_pagedItems;
    NSArray *_preheatedItems;
    NSArray *_activeItems;
    struct CGRect _visibleRect;
    struct CGRect _activeRect;
    struct CGRect _pagedRect;
    struct CGRect _cachedRect;
    struct CGRect _contentBounds;
}

@property(retain, nonatomic) NSArray *activeItems; // @synthesize activeItems=_activeItems;
@property(retain, nonatomic) NSArray *preheatedItems; // @synthesize preheatedItems=_preheatedItems;
@property(retain, nonatomic) NSArray *pagedItems; // @synthesize pagedItems=_pagedItems;
@property(retain, nonatomic) NSArray *preheatRects; // @synthesize preheatRects=_preheatRects;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(nonatomic) struct CGRect cachedRect; // @synthesize cachedRect=_cachedRect;
@property(nonatomic) struct CGRect pagedRect; // @synthesize pagedRect=_pagedRect;
@property(nonatomic) struct CGRect activeRect; // @synthesize activeRect=_activeRect;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (id)debugQuickLookObject;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;

@end

