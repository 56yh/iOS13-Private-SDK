//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFRepeatAction.h>

@interface WFForEachRepeatAction : WFRepeatAction
{
    unsigned long long _numberOfLoops;
}

- (unsigned long long)numberOfLoops;
- (id)providedVariableNames;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)arg1;
- (id)itemVariableName;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (_Bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (id)repeatCollectionWithVariableSource:(id)arg1;
- (void)setRepeatCollection:(id)arg1 withVariableSource:(id)arg2;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (_Bool)shouldRepeatWithVariableSource:(id)arg1;

@end

