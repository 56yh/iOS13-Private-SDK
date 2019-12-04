//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDictionary, WFContentCollection, WFWorkflow;

@interface WFWorkflowControllerState : NSObject <NSSecureCoding>
{
    WFWorkflow *_workflow;
    WFContentCollection *_currentInput;
    NSDictionary *_currentProcessedParameters;
    NSDictionary *_variables;
    unsigned long long _currentActionIndex;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long currentActionIndex; // @synthesize currentActionIndex=_currentActionIndex;
@property(readonly, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(readonly, nonatomic) NSDictionary *currentProcessedParameters; // @synthesize currentProcessedParameters=_currentProcessedParameters;
@property(readonly, nonatomic) WFContentCollection *currentInput; // @synthesize currentInput=_currentInput;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflow:(id)arg1 variables:(id)arg2 currentActionIndex:(unsigned long long)arg3 currentInput:(id)arg4 currentProcessedParameters:(id)arg5;

@end

