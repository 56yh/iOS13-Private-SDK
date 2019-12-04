//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXTransitionDataSource-Protocol.h>

@class NSString, UIView;
@protocol SXTransitionableComponentView;

@interface SXTransitionDataSourceNode : NSObject <SXTransitionDataSource>
{
    _Bool _usesThumbnail;
    unsigned long long _transitionType;
    id <SXTransitionableComponentView> _componentView;
}

@property(readonly, nonatomic) _Bool usesThumbnail; // @synthesize usesThumbnail=_usesThumbnail;
@property(readonly, nonatomic) id <SXTransitionableComponentView> componentView; // @synthesize componentView=_componentView;
@property(readonly, nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
@property(readonly, nonatomic) _Bool isTransitionable;
@property(readonly, nonatomic) struct CGRect transitionContentFrame;
@property(readonly, nonatomic) struct CGRect transitionContainerFrame;
@property(readonly, nonatomic) struct CGRect transitionVisibleFrame;
@property(readonly, nonatomic) _Bool transitionViewUsesThumbnail;
@property(readonly, nonatomic) _Bool transitionViewShouldFadeInContent;
@property(readonly, nonatomic) _Bool transitionViewIsVisible;
@property(readonly, nonatomic) UIView *transitionContentView;
@property(readonly, nonatomic) UIView *transitionContainerView;
- (id)initWithComponentView:(id)arg1 transitionType:(unsigned long long)arg2 usesThumbnail:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

