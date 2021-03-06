//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLFormElement : DOMHTMLElement
{
}

- (BOOL)checkValidity;
- (void)reset;
- (void)submit;
@property(readonly) int length;
@property(readonly) DOMHTMLCollection *elements;
@property(copy) NSString *target;
- (void)setNoValidate:(BOOL)arg1;
- (BOOL)noValidate;
@property(copy) NSString *name;
@property(copy) NSString *method;
@property(copy) NSString *encoding;
@property(copy) NSString *enctype;
- (void)setAutocomplete:(id)arg1;
- (id)autocomplete;
@property(copy) NSString *action;
@property(copy) NSString *acceptCharset;
- (int)structuralComplexityContribution;

@end

