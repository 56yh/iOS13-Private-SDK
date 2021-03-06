//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, WFContentCollection, WFWorkflow;

@interface WFWorkflowControllerState : NSObject <NSSecureCoding>
{
    WFWorkflow *_workflow;
    WFContentCollection *_currentInput;
    NSDictionary *_currentProcessedParameters;
    NSDictionary *_variables;
    NSUInteger _currentActionIndex;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger currentActionIndex; // @synthesize currentActionIndex=_currentActionIndex;
@property(readonly, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(readonly, nonatomic) NSDictionary *currentProcessedParameters; // @synthesize currentProcessedParameters=_currentProcessedParameters;
@property(readonly, nonatomic) WFContentCollection *currentInput; // @synthesize currentInput=_currentInput;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflow:(id)arg1 variables:(id)arg2 currentActionIndex:(NSUInteger)arg3 currentInput:(id)arg4 currentProcessedParameters:(id)arg5;

@end

