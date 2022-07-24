// Import the functions you need from the SDKs you need
import { initializeApp } from "firebase/app";
import { getAnalytics } from "firebase/analytics";
import { getFirestore } from "firebase/firestore";

const firebaseConfig = {
  apiKey: "AIzaSyDD4R2ou9AWE2JT3HBiQS_aOFf9NB1JRAM",
  authDomain: "house-marketplace-app-87c2f.firebaseapp.com",
  projectId: "house-marketplace-app-87c2f",
  storageBucket: "house-marketplace-app-87c2f.appspot.com",
  messagingSenderId: "20544728203",
  appId: "1:20544728203:web:fb864747136a847ecd388e",
  measurementId: "G-G3KJEEQRXN",
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);
const analytics = getAnalytics(app);

export const db = getFirestore();
