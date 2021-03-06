/*
 Copyright (C) 2012-2015 Soomla Inc.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#include "CCSoomlaStoreGpConfigBuilder.h"

using namespace soomla;

CCSoomlaStoreGpConfigBuilder::CCSoomlaStoreGpConfigBuilder() : CCSoomlaConfigBuilder() {

}

CCSoomlaStoreGpConfigBuilder* CCSoomlaStoreGpConfigBuilder::create() {
    return new CCSoomlaStoreGpConfigBuilder();
}

CCSoomlaStoreGpConfigBuilder* CCSoomlaStoreGpConfigBuilder::setAndroidPublicKey(const char *androidPublicKey) {
    return this->appendConfigParameter("androidPublicKey", cocos2d::__String::create(androidPublicKey)) ? this : NULL;
}

CCSoomlaStoreGpConfigBuilder* CCSoomlaStoreGpConfigBuilder::setTestPurchases(bool isTestPurchases) {
    return this->appendConfigParameter("testPurchases", cocos2d::__Bool::create(isTestPurchases)) ? this : NULL;
}

CCSoomlaStoreGpConfigBuilder* CCSoomlaStoreGpConfigBuilder::activateFraudProtection(const char *clientId, const char *clientSecret, const char *refreshToken, bool verifyOnServerFailure) {
    return this->appendConfigParameter("clientId", cocos2d::__String::create(clientId))
            && this->appendConfigParameter("clientSecret", cocos2d::__String::create(clientSecret))
            && this->appendConfigParameter("refreshToken", cocos2d::__String::create(refreshToken))
            && this->appendConfigParameter("verifyOnServerFailure", cocos2d::__Bool::create(verifyOnServerFailure))
            ? this : NULL;
}