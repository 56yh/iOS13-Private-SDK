//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class FPXExtensionContext, NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface FPXXPCListenerDelegate : NSObject <NSXPCListenerDelegate>
{
    FPXExtensionContext *_context;
    NSXPCInterface *_interface;
    id _exportedObject;
    NSString *_serviceName;
}

@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) FPXExtensionContext *context; // @synthesize context=_context;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

