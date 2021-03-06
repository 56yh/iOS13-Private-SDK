//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentSizerFactory-Protocol.h>

@class NSString;
@protocol SXAdControllerProvider, SXDOMObjectProviding;

@interface SXMediumRectangleAdComponentSizerFactory : NSObject <SXComponentSizerFactory>
{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXAdControllerProvider> _adControllerProvider;
}

@property(readonly, nonatomic) id <SXAdControllerProvider> adControllerProvider; // @synthesize adControllerProvider=_adControllerProvider;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
// - (void).cxx_destruct;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (id)initWithDOMObjectProvider:(id)arg1 adControllerProvider:(id)arg2;

@end

