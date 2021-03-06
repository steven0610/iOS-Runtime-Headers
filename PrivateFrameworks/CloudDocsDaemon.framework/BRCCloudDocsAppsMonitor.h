/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate> {
    NSMutableDictionary * _appIDsByAppLibraryID;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _cloudDocsAppLibrariesByAppID;
    NSObject<OS_dispatch_queue> * _fetchInstalledAppsQueue;
    BOOL  _hasFetchedInitialApps;
    NSMutableSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    br_pacer * _refetchPacer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)cloudDocsAppsMonitor;

- (void).cxx_destruct;
- (void)_refetchApps;
- (void)_start;
- (void)addObserver:(id)arg1;
- (id)allApplicationIdentifiers;
- (id)applicationIdentifiersForContainerID:(id)arg1;
- (id)containerIDsForApplicationIdentifier:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (void)forceRefetchAppList;
- (BOOL)hasFetchedInitialApps;
- (id)init;
- (BOOL)isApplicationInstalledForContainerID:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
