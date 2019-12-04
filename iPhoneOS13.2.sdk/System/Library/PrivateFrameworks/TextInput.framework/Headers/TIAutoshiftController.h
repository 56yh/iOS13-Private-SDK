//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TITextInputTraits;

@interface TIAutoshiftController : NSObject
{
    _Bool _enabled;
    TITextInputTraits *_textInputTraits;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
- (_Bool)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg1 inputManagerState:(id)arg2;
- (unsigned long long)actionForDocumentState:(id)arg1 inputMangerState:(id)arg2;
- (id)initWithTextInputTraits:(id)arg1;

@end

