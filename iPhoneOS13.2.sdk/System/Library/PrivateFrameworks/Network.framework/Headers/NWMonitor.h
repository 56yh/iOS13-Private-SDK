//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSString, NSURL, NSUUID, NWEndpoint, NWInterface, NWNetworkDescription, NWParameters, NWPathEvaluator;

@interface NWMonitor : NSObject <NSURLSessionTaskDelegate>
{
    unsigned int _mID;
    long long _status;
    NWNetworkDescription *_bestAvailableNetworkDescription;
    NSArray *_networkDescriptionArray;
    NWEndpoint *_endpoint;
    NWParameters *_parameters;
    NWPathEvaluator *_pathEvaluator;
    NSUUID *_lastProbeUUID;
    NSURL *_lastProbeURL;
    NWInterface *_interface;
}

+ (id)queue;
+ (id)mainOperationQueue;
+ (id)monitorWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (id)monitorWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (void)saveMonitor:(id)arg1;
+ (id)copySavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property unsigned int mID; // @synthesize mID=_mID;
@property(retain) NWInterface *interface; // @synthesize interface=_interface;
@property(retain) NSURL *lastProbeURL; // @synthesize lastProbeURL=_lastProbeURL;
@property(retain) NSUUID *lastProbeUUID; // @synthesize lastProbeUUID=_lastProbeUUID;
@property(retain) NWPathEvaluator *pathEvaluator; // @synthesize pathEvaluator=_pathEvaluator;
@property(retain) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NSArray *networkDescriptionArray; // @synthesize networkDescriptionArray=_networkDescriptionArray;
@property(retain) NWNetworkDescription *bestAvailableNetworkDescription; // @synthesize bestAvailableNetworkDescription=_bestAvailableNetworkDescription;
@property long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *privateDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)evaluateStartingAtIndex:(unsigned long long)arg1 probeUUID:(id)arg2 probeWasSuccessful:(_Bool)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

