//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class WFCustomButtonComponent;

@interface WFNumberPickerButtonComponent : CKCompositeComponent
{
    _Bool _becomeFirstResponder;
    id /* block */ _updateBlock;
    id /* block */ _variableBlock;
    WFCustomButtonComponent *_buttonComponent;
}

+ (id)newWithAttributes:(const struct WFNumberPickerAttributes *)arg1 identifier:(id)arg2 updateBlock:(id /* block */)arg3 variableBlock:(id /* block */)arg4;
@property(readonly, nonatomic) _Bool becomeFirstResponder; // @synthesize becomeFirstResponder=_becomeFirstResponder;
@property(readonly, nonatomic) __weak WFCustomButtonComponent *buttonComponent; // @synthesize buttonComponent=_buttonComponent;
@property(readonly, nonatomic) id /* block */ variableBlock; // @synthesize variableBlock=_variableBlock;
@property(readonly, nonatomic) id /* block */ updateBlock; // @synthesize updateBlock=_updateBlock;

@end

