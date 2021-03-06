//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutPipeline-Protocol.h>

@class NSMutableArray, NSOperationQueue;
@protocol SXDOMObjectProviderFactory, SXLayoutOperationFactory, SXLayoutPipelineDelegate;

@interface SXLayoutPipeline : NSObject <SXLayoutPipeline>
{
    id <SXLayoutPipelineDelegate> delegate;
    id <SXLayoutOperationFactory> _layoutOperationFactory;
    id <SXDOMObjectProviderFactory> _DOMObjectProviderFactory;
    NSOperationQueue *_layoutOperationQueue;
    NSMutableArray *_preProcessors;
    NSMutableArray *_postProcessors;
}

@property(readonly, nonatomic) NSMutableArray *postProcessors; // @synthesize postProcessors=_postProcessors;
@property(readonly, nonatomic) NSMutableArray *preProcessors; // @synthesize preProcessors=_preProcessors;
@property(readonly, nonatomic) NSOperationQueue *layoutOperationQueue; // @synthesize layoutOperationQueue=_layoutOperationQueue;
@property(readonly, nonatomic) id <SXDOMObjectProviderFactory> DOMObjectProviderFactory; // @synthesize DOMObjectProviderFactory=_DOMObjectProviderFactory;
@property(readonly, nonatomic) id <SXLayoutOperationFactory> layoutOperationFactory; // @synthesize layoutOperationFactory=_layoutOperationFactory;
@property(nonatomic) __weak id <SXLayoutPipelineDelegate> delegate; // @synthesize delegate;
// - (void).cxx_destruct;
- (void)cancelTasks;
- (void)removeProcessor:(id)arg1 type:(NSUInteger)arg2;
- (void)addProcessor:(id)arg1 type:(NSUInteger)arg2;
- (void)finalizeLayoutForLayoutOperation:(id)arg1 task:(id)arg2 DOMObjectProvider:(id)arg3;
- (void)layoutWithTask:(id)arg1;
- (id)initWithLayoutOperationFactory:(id)arg1 DOMObjectProviderFactory:(id)arg2;

@end

