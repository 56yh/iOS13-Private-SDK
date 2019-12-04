//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFTextTokenChooser.h>

#import <WorkflowUI/WFParameterEventObserver-Protocol.h>

@class NSArray, NSString, WFEnumerationParameter, WFVariableSubstitutableParameterState;

@interface WFEnumerationTextTokenChooser : WFTextTokenChooser <WFParameterEventObserver>
{
    WFVariableSubstitutableParameterState *_currentState;
    WFEnumerationParameter *_parameter;
    NSArray *_parameterStates;
    id /* block */ _selectionHandler;
}

+ (id)presentWithParameter:(id)arg1 state:(id)arg2 variableProvider:(id)arg3 variableUIDelegate:(id)arg4 processing:(_Bool)arg5 sourceView:(id)arg6 sourceRect:(struct CGRect)arg7 viewController:(id)arg8 selectionHandler:(id /* block */)arg9;
@property(copy, nonatomic) id /* block */ selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(copy, nonatomic) NSArray *parameterStates; // @synthesize parameterStates=_parameterStates;
@property(retain, nonatomic) WFEnumerationParameter *parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) WFVariableSubstitutableParameterState *currentState; // @synthesize currentState=_currentState;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)updatePossibleStates;
- (void)updateAdditionalButtons;
- (void)updateCurrentState;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

