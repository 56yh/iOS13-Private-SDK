//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKComponent.h>

@interface WFModuleIndentationComponent : CKComponent
{
    CKComponent *_component;
    NSUInteger _indentationLevel;
}

+ (id)newWithIndentationLevel:(NSUInteger)arg1 component:(id)arg2;
+ (id)newWithView:(const struct CKComponentViewConfiguration )arg1 size:(const struct CKComponentSize )arg2;
// - (void).cxx_destruct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize )arg2 relativeToParentSize:(CGSize)arg3;

@end

