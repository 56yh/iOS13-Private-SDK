//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SXLayoutOptions;
@protocol SXComponent, SXComponentLayout, SXComponentStyle, SXDOMObjectProviding;

@interface SXComponentSizer : NSObject
{
    id <SXComponent> _component;
    id <SXComponentLayout> _componentLayout;
    id <SXComponentStyle> _componentStyle;
    id <SXDOMObjectProviding> _DOMObjectProvider;
    SXLayoutOptions *_layoutOptions;
    NSMutableDictionary *_infoForRendering;
    struct CGSize _suggestedSize;
}

@property(readonly, nonatomic) NSMutableDictionary *infoForRendering; // @synthesize infoForRendering=_infoForRendering;
@property(readonly, nonatomic) SXLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic) struct CGSize suggestedSize; // @synthesize suggestedSize=_suggestedSize;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
@property(readonly, nonatomic) id <SXComponentStyle> componentStyle; // @synthesize componentStyle=_componentStyle;
@property(readonly, nonatomic) id <SXComponentLayout> componentLayout; // @synthesize componentLayout=_componentLayout;
@property(readonly, nonatomic) id <SXComponent> component; // @synthesize component=_component;
- (void)saveInfo:(id)arg1 forRenderingPhaseWithIdentifier:(id)arg2;
- (struct UIEdgeInsets)bordersInsetsWithUnitConverter:(id)arg1;
- (struct UIEdgeInsets)layoutMarginsWithUnitConverter:(id)arg1;
- (struct UIEdgeInsets)contentInsetsWithUnitConverter:(id)arg1;
- (long long)minimumColumnLength;
- (struct _NSRange)overrideColumnLayoutForColumnRange:(struct _NSRange)arg1 inColumnLayout:(id)arg2;
- (unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (_Bool)allowComponentIntersection;
- (id)snapLines;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5;

@end

