//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface ARUIComputeState : NSObject
{
    id <MTLComputePipelineState> _computePipelineState;
}

@property(retain, nonatomic) id <MTLComputePipelineState> computePipelineState; // @synthesize computePipelineState=_computePipelineState;
- (id)computeFunctionFromLibrary:(id)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end

