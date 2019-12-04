//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, SXComponentView;
@protocol SXComponentInteractionHandler;

@protocol SXComponentInteractionHandlerManager 
- (NSArray *)interactionsForComponentView:(SXComponentView *)arg1 type:(unsigned long long)arg2;
- (NSArray *)interactionsForComponentView:(SXComponentView *)arg1;
- (SXComponentView *)componentViewForLocation:(struct CGPoint)arg1;
- (void)removeInteractionHandler:(id <SXComponentInteractionHandler>)arg1 componentView:(SXComponentView *)arg2;
- (void)addInteractionHandler:(id <SXComponentInteractionHandler>)arg1 componentView:(SXComponentView *)arg2 types:(unsigned long long)arg3;
@end

