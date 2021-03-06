//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class HMCharacteristic, NSDictionary, NSString;

@interface WFHMCharacteristicSubstitutableState : WFVariableSubstitutableParameterState
{
    HMCharacteristic *_characteristic;
    NSString *_homeIdentifier;
    NSDictionary *_serializedCharacteristic;
}

@property(retain, nonatomic) NSDictionary *serializedCharacteristic; // @synthesize serializedCharacteristic=_serializedCharacteristic;
@property(readonly, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
// - (void).cxx_destruct;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(id /* CDUnknownBlockType */)arg3 valueHandler:(id /* CDUnknownBlockType */)arg4;
- (id)containedVariables;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithCharacteristic:(id)arg1 homeIdentifier:(id)arg2;

@end

