//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMDiagnostics, AXMLanguage, NSLocale;

@interface AXMTextProcessingOperation : NSObject
{
    AXMLanguage *_language;
    AXMDiagnostics *_diagnostics;
}

+ (id)operationWithSystemLanguage:(id)arg1;
+ (id)operationWithLanguage:(id)arg1 diagnostics:(id)arg2;
@property(retain, nonatomic) AXMDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(readonly, nonatomic) AXMLanguage *language; // @synthesize language=_language;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSLocale *lexiconLocale;
- (id)_initWithLanguage:(id)arg1 diagnostics:(id)arg2;

@end
