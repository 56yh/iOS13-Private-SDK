//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class NSString, WFAction;

@interface WFMeasurementUnitPickerParameter : WFEnumerationParameter <WFActionEventObserver>
{
    WFAction *_action;
}

@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (_Bool)isHidden;
- (id)currentUnitType;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (Class)singleStateClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
